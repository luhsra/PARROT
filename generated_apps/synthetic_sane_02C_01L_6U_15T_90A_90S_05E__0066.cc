#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task2Subtask3);
DeclareTask(CPU0Task2Subtask9);
DeclareTask(CPU0Task4Subtask4);
DeclareTask(CPU0Task4Subtask6);
DeclareTask(CPU0Task5Subtask5);
DeclareTask(CPU1Task0Subtask0);
DeclareTask(CPU1Task0Subtask1);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU1Task0Subtask14);
DeclareTask(CPU1Task1Subtask2);
DeclareTask(CPU1Task1Subtask7);
DeclareTask(CPU1Task1Subtask10);
DeclareTask(CPU1Task1Subtask11);
DeclareTask(CPU1Task1Subtask13);
DeclareTask(CPU1Task3Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 32); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 98); // 0
  SetEvent(CPU1Task0Subtask8,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 142); // 0
  ActivateTask(CPU1Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 112); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 9); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 193); // 0
  ActivateTask(CPU0Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 89); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 19); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 176); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 153); // 0
  SetEvent(CPU1Task1Subtask13,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 30); // 0
  ActivateTask(CPU1Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 93); // 0
  ActivateTask(CPU1Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 159); // 0
  ActivateTask(CPU1Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 177); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 85); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 33); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 197); // 0
  ActivateTask(CPU1Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 67); // 0
  ActivateTask(CPU1Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 51); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 19); // 0
  SetEvent(CPU0Task2Subtask3,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 18); // 0
  ActivateTask(CPU0Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 73); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 73); // 0
  SetEvent(CPU1Task1Subtask7,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 175); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 111); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 20); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 37); // 0
  SetEvent(CPU1Task1Subtask2,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 160); // 0
  TerminateTask();

}
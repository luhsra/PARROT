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


DeclareTask(CPU0Task1Subtask0);
DeclareTask(CPU0Task2Subtask6);
DeclareTask(CPU0Task2Subtask7);
DeclareTask(CPU0Task2Subtask11);
DeclareTask(CPU0Task2Subtask12);
DeclareTask(CPU0Task2Subtask13);
DeclareTask(CPU1Task0Subtask1);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask4);
DeclareTask(CPU1Task3Subtask9);
DeclareTask(CPU1Task3Subtask10);
DeclareTask(CPU1Task4Subtask5);
DeclareTask(CPU1Task4Subtask14);
DeclareTask(CPU1Task5Subtask2);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 171); // 0
  SetEvent(CPU0Task2Subtask13,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 147); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 16); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 2); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 51); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 82); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 20); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 44); // 0
  ActivateTask(CPU0Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 180); // 0
  ActivateTask(CPU0Task2Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 141); // 0
  SetEvent(CPU0Task2Subtask11,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 139); // 0
  ActivateTask(CPU0Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 78); // 0
  SetEvent(CPU1Task3Subtask4,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 130); // 0
  ActivateTask(CPU1Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 132); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 174); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 75); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 6); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 106); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 200); // 0
  ActivateTask(CPU1Task3Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 109); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 179); // 0
  ActivateTask(CPU0Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 166); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 176); // 0
  SetEvent(CPU1Task3Subtask3,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 68); // 0
  ActivateTask(CPU1Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 49); // 0
  SetEvent(CPU0Task2Subtask12,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 78); // 0
  ActivateTask(CPU1Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 5); // 0
  ActivateTask(CPU0Task1Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 37); // 0
  TerminateTask();

}
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


DeclareTask(CPU0Task1Subtask1);
DeclareTask(CPU0Task2Subtask0);
DeclareTask(CPU0Task2Subtask12);
DeclareTask(CPU0Task2Subtask14);
DeclareTask(CPU1Task4Subtask2);
DeclareTask(CPU1Task4Subtask5);
DeclareTask(CPU2Task0Subtask4);
DeclareTask(CPU2Task0Subtask8);
DeclareTask(CPU2Task0Subtask9);
DeclareTask(CPU2Task0Subtask11);
DeclareTask(CPU2Task0Subtask13);
DeclareTask(CPU2Task3Subtask3);
DeclareTask(CPU2Task3Subtask6);
DeclareTask(CPU2Task5Subtask7);
DeclareTask(CPU2Task5Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 187); // 0
  SetEvent(CPU0Task2Subtask12,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 61); // 0
  ActivateTask(CPU2Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 138); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 156); // 0
  ActivateTask(CPU2Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 116); // 0
  ActivateTask(CPU0Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 60); // 0
  SetEvent(CPU2Task5Subtask7,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 47); // 0
  ActivateTask(CPU0Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 139); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 22); // 0
  SetEvent(CPU2Task0Subtask4,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 179); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 196); // 0
  ActivateTask(CPU1Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 168); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 1); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 200); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 38); // 0
  ActivateTask(CPU2Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 56); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 162); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 76); // 0
  ActivateTask(CPU2Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 128); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 117); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 18); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 66); // 0
  ActivateTask(CPU2Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 135); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 44); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 172); // 0
  ActivateTask(CPU2Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 190); // 0
  SetEvent(CPU2Task0Subtask8,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 27); // 0
  ActivateTask(CPU2Task3Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 51); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 194); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 181); // 0
  SetEvent(CPU2Task3Subtask6,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 97); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 130); // 0
  ActivateTask(CPU1Task4Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 105); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 116); // 0
  TerminateTask();

}
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


DeclareTask(CPU0Task1Subtask5);
DeclareTask(CPU0Task1Subtask9);
DeclareTask(CPU0Task1Subtask11);
DeclareTask(CPU1Task5Subtask0);
DeclareTask(CPU1Task5Subtask12);
DeclareTask(CPU1Task5Subtask14);
DeclareTask(CPU2Task0Subtask3);
DeclareTask(CPU2Task0Subtask7);
DeclareTask(CPU2Task0Subtask13);
DeclareTask(CPU2Task2Subtask4);
DeclareTask(CPU2Task2Subtask8);
DeclareTask(CPU2Task3Subtask1);
DeclareTask(CPU2Task3Subtask10);
DeclareTask(CPU2Task4Subtask2);
DeclareTask(CPU2Task4Subtask6);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 138); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 94); // 0
  ActivateTask(CPU0Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 86); // 0
  ActivateTask(CPU0Task1Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 141); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 49); // 0
  ActivateTask(CPU1Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 163); // 0
  SetEvent(CPU2Task4Subtask2,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 194); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 20); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 172); // 0
  SetEvent(CPU2Task0Subtask13,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 114); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 29); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 147); // 0
  SetEvent(CPU2Task3Subtask1,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 120); // 0
  ActivateTask(CPU2Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 52); // 0
  ActivateTask(CPU1Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 179); // 0
  ActivateTask(CPU2Task0Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 92); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 143); // 0
  SetEvent(CPU1Task5Subtask14,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 109); // 0
  SetEvent(CPU0Task1Subtask11,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 25); // 0
  ActivateTask(CPU2Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 103); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 9); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 13); // 0
  ActivateTask(CPU1Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 169); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 147); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 24); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 145); // 0
  ActivateTask(CPU2Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 150); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 26); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 102); // 0
  ActivateTask(CPU2Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 36); // 0
  TerminateTask();

}

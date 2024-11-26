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


DeclareTask(CPU0Task2Subtask0);
DeclareTask(CPU0Task2Subtask9);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU1Task0Subtask11);
DeclareTask(CPU2Task1Subtask1);
DeclareTask(CPU2Task1Subtask2);
DeclareTask(CPU2Task1Subtask3);
DeclareTask(CPU2Task1Subtask14);
DeclareTask(CPU2Task3Subtask4);
DeclareTask(CPU2Task3Subtask6);
DeclareTask(CPU2Task4Subtask12);
DeclareTask(CPU2Task4Subtask13);
DeclareTask(CPU2Task5Subtask5);
DeclareTask(CPU2Task5Subtask7);
DeclareTask(CPU2Task5Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 49); // 0
  SetEvent(CPU1Task0Subtask11,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 161); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 25); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 10); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 50); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 113); // 0
  ActivateTask(CPU1Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 62); // 0
  SetEvent(CPU2Task3Subtask4,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 60); // 0
  ActivateTask(CPU2Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 80); // 0
  ActivateTask(CPU2Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 31); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 200); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 62); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 114); // 0
  SetEvent(CPU2Task5Subtask10,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 118); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 83); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 58); // 0
  ActivateTask(CPU2Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 69); // 0
  SetEvent(CPU2Task1Subtask2,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 53); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 7); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 181); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 192); // 0
  ActivateTask(CPU0Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 175); // 0
  ActivateTask(CPU2Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 131); // 0
  SetEvent(CPU2Task1Subtask3,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 184); // 0
  ActivateTask(CPU2Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 91); // 0
  ActivateTask(CPU2Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 188); // 0
  TerminateTask();

}

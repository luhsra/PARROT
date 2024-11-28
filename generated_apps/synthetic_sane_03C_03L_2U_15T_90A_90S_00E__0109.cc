#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task0Subtask6);
DeclareTask(CPU0Task0Subtask9);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU0Task0Subtask14);
DeclareTask(CPU0Task2Subtask0);
DeclareTask(CPU0Task4Subtask3);
DeclareTask(CPU0Task4Subtask11);
DeclareTask(CPU1Task1Subtask1);
DeclareTask(CPU1Task1Subtask7);
DeclareTask(CPU1Task1Subtask10);
DeclareTask(CPU1Task5Subtask4);
DeclareTask(CPU1Task5Subtask5);
DeclareTask(CPU1Task5Subtask8);
DeclareTask(CPU2Task3Subtask2);
DeclareTask(CPU2Task3Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask2 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 186); // 0
  ActivateTask(CPU0Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 128); // 0
  ActivateTask(CPU0Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 128); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 22); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 61); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 30); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 119); // 0
  ActivateTask(CPU1Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 159); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 14); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 84); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 70); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 138); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 44); // 0
  ActivateTask(CPU0Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 125); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 15); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 5); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 58); // 0
  ActivateTask(CPU2Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 166); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 19); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 116); // 0
  ActivateTask(CPU1Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 9); // 0
  ActivateTask(CPU0Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 147); // 0
  ActivateTask(CPU1Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 5); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 20); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 196); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 53); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 93); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 25); // 0
  ActivateTask(CPU2Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 124); // 0
  TerminateTask();

}
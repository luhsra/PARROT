#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task4Subtask2);
DeclareTask(CPU1Task1Subtask0);
DeclareTask(CPU1Task1Subtask11);
DeclareTask(CPU1Task1Subtask12);
DeclareTask(CPU2Task0Subtask9);
DeclareTask(CPU2Task2Subtask10);
DeclareTask(CPU2Task2Subtask13);
DeclareTask(CPU2Task3Subtask3);
DeclareTask(CPU2Task3Subtask6);
DeclareTask(CPU2Task3Subtask7);
DeclareTask(CPU2Task3Subtask14);
DeclareTask(CPU2Task5Subtask1);
DeclareTask(CPU2Task5Subtask4);
DeclareTask(CPU2Task5Subtask5);
DeclareTask(CPU2Task5Subtask8);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 10); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 11); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 160); // 0
  ActivateTask(CPU2Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 39); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 30); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 160); // 0
  ActivateTask(CPU1Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 176); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 114); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 18); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 20); // 0
  ActivateTask(CPU1Task1Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 115); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 196); // 0
  ActivateTask(CPU2Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 133); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 129); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 23); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 30); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 29); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 68); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 183); // 0
  ActivateTask(CPU2Task3Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 95); // 0
  ActivateTask(CPU2Task3Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 79); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 11); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 153); // 0
  ActivateTask(CPU2Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 106); // 0
  ActivateTask(CPU2Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 121); // 0
  TerminateTask();

}
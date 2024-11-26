#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task1Subtask8);
DeclareTask(CPU0Task3Subtask0);
DeclareTask(CPU0Task3Subtask3);
DeclareTask(CPU0Task3Subtask11);
DeclareTask(CPU0Task4Subtask1);
DeclareTask(CPU0Task4Subtask9);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU0Task5Subtask4);
DeclareTask(CPU0Task5Subtask5);
DeclareTask(CPU0Task5Subtask6);
DeclareTask(CPU0Task5Subtask14);
DeclareTask(CPU1Task0Subtask7);
DeclareTask(CPU1Task0Subtask10);
DeclareTask(CPU2Task2Subtask2);
DeclareTask(CPU2Task2Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 123); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 43); // 0
  ActivateTask(CPU0Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 133); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 74); // 0
  ActivateTask(CPU0Task3Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 170); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 50); // 0
  ActivateTask(CPU0Task4Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 129); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 96); // 0
  ActivateTask(CPU1Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 182); // 0
  ActivateTask(CPU0Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 5); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 30); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 93); // 0
  ActivateTask(CPU0Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 155); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 163); // 0
  ActivateTask(CPU0Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 184); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 82); // 0
  ActivateTask(CPU0Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 24); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 34); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 21); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 14); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 181); // 0
  ActivateTask(CPU2Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 158); // 0
  ActivateTask(CPU0Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 164); // 0
  ActivateTask(CPU0Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 8); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 136); // 0
  TerminateTask();

}

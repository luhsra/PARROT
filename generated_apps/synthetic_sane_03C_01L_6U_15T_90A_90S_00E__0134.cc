#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task2Subtask7);
DeclareTask(CPU0Task2Subtask8);
DeclareTask(CPU0Task2Subtask10);
DeclareTask(CPU1Task3Subtask1);
DeclareTask(CPU1Task4Subtask0);
DeclareTask(CPU1Task4Subtask4);
DeclareTask(CPU1Task4Subtask12);
DeclareTask(CPU2Task0Subtask3);
DeclareTask(CPU2Task0Subtask6);
DeclareTask(CPU2Task0Subtask9);
DeclareTask(CPU2Task1Subtask2);
DeclareTask(CPU2Task1Subtask5);
DeclareTask(CPU2Task1Subtask11);
DeclareTask(CPU2Task1Subtask14);
DeclareTask(CPU2Task5Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask13 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 79); // 0
  ActivateTask(CPU0Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 68); // 0
  ActivateTask(CPU0Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 124); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 165); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 109); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 178); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 29); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 115); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 148); // 0
  ActivateTask(CPU1Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 38); // 0
  ActivateTask(CPU1Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 60); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 52); // 0
  ActivateTask(CPU2Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 11); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 184); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 19); // 0
  ActivateTask(CPU2Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 151); // 0
  ActivateTask(CPU0Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 134); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 196); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 84); // 0
  ActivateTask(CPU2Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 60); // 0
  ActivateTask(CPU2Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 32); // 0
  ActivateTask(CPU2Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 158); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 23); // 0
  TerminateTask();

}

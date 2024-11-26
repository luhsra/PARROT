#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task1Subtask7);
DeclareTask(CPU1Task5Subtask4);
DeclareTask(CPU1Task5Subtask10);
DeclareTask(CPU2Task4Subtask0);
DeclareTask(CPU3Task2Subtask2);
DeclareTask(CPU3Task2Subtask5);
DeclareTask(CPU3Task2Subtask9);
DeclareTask(CPU3Task2Subtask12);
DeclareTask(CPU4Task3Subtask3);
DeclareTask(CPU4Task3Subtask6);
DeclareTask(CPU4Task3Subtask11);
DeclareTask(CPU5Task0Subtask1);
DeclareTask(CPU5Task0Subtask8);
DeclareTask(CPU5Task0Subtask13);
DeclareTask(CPU5Task0Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 3); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 142); // 0
  ActivateTask(CPU1Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 124); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 20); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 92); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 11); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 22); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 200); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 6); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 25); // 0
  ActivateTask(CPU3Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 110); // 0
  ActivateTask(CPU3Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 153); // 0
  ActivateTask(CPU1Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 19); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 7); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 72); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 35); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 106); // 0
  ActivateTask(CPU3Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 95); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 96); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 149); // 0
  ActivateTask(CPU4Task3Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 109); // 0
  ActivateTask(CPU4Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 35); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 160); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 98); // 0
  ActivateTask(CPU5Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 34); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 24); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 25); // 0
  ActivateTask(CPU5Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 25); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 177); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 18); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 175); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 196); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 175); // 0
  ActivateTask(CPU5Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 138); // 0
  TerminateTask();

}

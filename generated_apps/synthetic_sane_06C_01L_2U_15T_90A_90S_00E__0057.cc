#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask6);
DeclareTask(CPU0Task0Subtask9);
DeclareTask(CPU0Task0Subtask10);
DeclareTask(CPU0Task0Subtask12);
DeclareTask(CPU1Task4Subtask5);
DeclareTask(CPU1Task4Subtask8);
DeclareTask(CPU2Task1Subtask0);
DeclareTask(CPU2Task1Subtask2);
DeclareTask(CPU3Task5Subtask7);
DeclareTask(CPU3Task5Subtask13);
DeclareTask(CPU3Task5Subtask14);
DeclareTask(CPU4Task3Subtask1);
DeclareTask(CPU4Task3Subtask3);
DeclareTask(CPU4Task3Subtask11);
DeclareTask(CPU5Task2Subtask4);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 123); // 0
  ActivateTask(CPU0Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 70); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 150); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 131); // 0
  ActivateTask(CPU0Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 49); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 63); // 0
  ActivateTask(CPU1Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 155); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 83); // 0
  ActivateTask(CPU2Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 29); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 191); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 25); // 0
  ActivateTask(CPU3Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 83); // 0
  ActivateTask(CPU3Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 19); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 5); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 70); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 168); // 0
  ActivateTask(CPU4Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 190); // 0
  ActivateTask(CPU2Task1Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 25); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 62); // 0
  ActivateTask(CPU4Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 160); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 32); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 141); // 0
  TerminateTask();

}
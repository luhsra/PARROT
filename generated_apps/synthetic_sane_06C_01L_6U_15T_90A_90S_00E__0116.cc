#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task2Subtask0);
DeclareTask(CPU0Task2Subtask4);
DeclareTask(CPU0Task2Subtask9);
DeclareTask(CPU1Task3Subtask11);
DeclareTask(CPU1Task3Subtask12);
DeclareTask(CPU1Task3Subtask13);
DeclareTask(CPU2Task1Subtask5);
DeclareTask(CPU2Task1Subtask6);
DeclareTask(CPU3Task5Subtask1);
DeclareTask(CPU3Task5Subtask3);
DeclareTask(CPU3Task5Subtask8);
DeclareTask(CPU4Task0Subtask7);
DeclareTask(CPU4Task0Subtask10);
DeclareTask(CPU5Task4Subtask2);
DeclareTask(CPU5Task4Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask2 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 42); // 0
  ActivateTask(CPU0Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 4); // 0
  ActivateTask(CPU0Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 40); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 78); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 48); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 180); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 166); // 0
  ActivateTask(CPU1Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 107); // 0
  ActivateTask(CPU0Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 129); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 191); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 70); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 176); // 0
  ActivateTask(CPU3Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 63); // 0
  ActivateTask(CPU3Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 20); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 135); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 47); // 0
  ActivateTask(CPU1Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 60); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 122); // 0
  ActivateTask(CPU2Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 70); // 0
  ActivateTask(CPU5Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 191); // 0
  TerminateTask();

}

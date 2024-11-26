#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task5Subtask0);
DeclareTask(CPU0Task5Subtask13);
DeclareTask(CPU0Task5Subtask14);
DeclareTask(CPU1Task4Subtask10);
DeclareTask(CPU1Task4Subtask12);
DeclareTask(CPU2Task1Subtask2);
DeclareTask(CPU2Task1Subtask5);
DeclareTask(CPU2Task1Subtask8);
DeclareTask(CPU3Task3Subtask4);
DeclareTask(CPU4Task2Subtask3);
DeclareTask(CPU4Task2Subtask6);
DeclareTask(CPU4Task2Subtask11);
DeclareTask(CPU5Task0Subtask1);
DeclareTask(CPU5Task0Subtask7);
DeclareTask(CPU5Task0Subtask9);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 159); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 163); // 0
  ActivateTask(CPU0Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 141); // 0
  ActivateTask(CPU0Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 144); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 118); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 68); // 0
  ActivateTask(CPU2Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 160); // 0
  ActivateTask(CPU2Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 40); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 164); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 157); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 21); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 127); // 0
  ActivateTask(CPU4Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 97); // 0
  ActivateTask(CPU4Task2Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 88); // 0
  ActivateTask(CPU1Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 68); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 163); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 28); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 189); // 0
  ActivateTask(CPU5Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 147); // 0
  ActivateTask(CPU5Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 176); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 85); // 0
  TerminateTask();

}

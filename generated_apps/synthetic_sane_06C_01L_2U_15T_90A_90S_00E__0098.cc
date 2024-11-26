#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask7);
DeclareTask(CPU1Task2Subtask2);
DeclareTask(CPU1Task2Subtask3);
DeclareTask(CPU1Task2Subtask4);
DeclareTask(CPU1Task2Subtask8);
DeclareTask(CPU2Task5Subtask0);
DeclareTask(CPU2Task5Subtask5);
DeclareTask(CPU2Task5Subtask12);
DeclareTask(CPU3Task4Subtask9);
DeclareTask(CPU3Task4Subtask11);
DeclareTask(CPU3Task4Subtask13);
DeclareTask(CPU4Task1Subtask1);
DeclareTask(CPU4Task1Subtask6);
DeclareTask(CPU4Task1Subtask10);
DeclareTask(CPU5Task0Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask14 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 179); // 0
  ActivateTask(CPU1Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 87); // 0
  ActivateTask(CPU1Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 87); // 0
  ActivateTask(CPU1Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 88); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 131); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 188); // 0
  ActivateTask(CPU2Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 44); // 0
  ActivateTask(CPU4Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 108); // 0
  ActivateTask(CPU2Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 134); // 0
  ActivateTask(CPU3Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 159); // 0
  ActivateTask(CPU3Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 22); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 4); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 116); // 0
  ActivateTask(CPU4Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 83); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 197); // 0
  TerminateTask();

}

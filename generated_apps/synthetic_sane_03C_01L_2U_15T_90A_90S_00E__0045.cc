#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask2);
DeclareTask(CPU0Task1Subtask4);
DeclareTask(CPU0Task1Subtask6);
DeclareTask(CPU0Task1Subtask11);
DeclareTask(CPU0Task4Subtask0);
DeclareTask(CPU0Task4Subtask5);
DeclareTask(CPU1Task2Subtask8);
DeclareTask(CPU1Task2Subtask12);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task5Subtask1);
DeclareTask(CPU1Task5Subtask7);
DeclareTask(CPU1Task5Subtask9);
DeclareTask(CPU2Task0Subtask10);
DeclareTask(CPU2Task0Subtask13);
DeclareTask(CPU2Task0Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask14 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 136); // 0
  ActivateTask(CPU0Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 178); // 0
  ActivateTask(CPU0Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 161); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 18); // 0
  ActivateTask(CPU0Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 191); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 91); // 0
  ActivateTask(CPU0Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 115); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 60); // 0
  ActivateTask(CPU1Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 55); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 101); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 29); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 108); // 0
  ActivateTask(CPU1Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 97); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 170); // 0
  ActivateTask(CPU1Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 16); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 83); // 0
  ActivateTask(CPU2Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 195); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 111); // 0
  ActivateTask(CPU2Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 62); // 0
  TerminateTask();

}

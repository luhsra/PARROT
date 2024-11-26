#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task2Subtask11);
DeclareTask(CPU0Task2Subtask14);
DeclareTask(CPU1Task3Subtask12);
DeclareTask(CPU1Task3Subtask13);
DeclareTask(CPU1Task4Subtask4);
DeclareTask(CPU1Task4Subtask8);
DeclareTask(CPU2Task0Subtask5);
DeclareTask(CPU2Task0Subtask9);
DeclareTask(CPU2Task1Subtask0);
DeclareTask(CPU2Task1Subtask2);
DeclareTask(CPU2Task1Subtask7);
DeclareTask(CPU2Task5Subtask1);
DeclareTask(CPU2Task5Subtask3);
DeclareTask(CPU2Task5Subtask6);
DeclareTask(CPU2Task5Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 168); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 34); // 0
  ActivateTask(CPU1Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 124); // 0
  ActivateTask(CPU2Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 39); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 77); // 0
  ActivateTask(CPU1Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 163); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 98); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 19); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 94); // 0
  ActivateTask(CPU2Task0Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 10); // 0
  ActivateTask(CPU2Task1Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 179); // 0
  ActivateTask(CPU2Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 72); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 79); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 5); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 72); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 45); // 0
  ActivateTask(CPU0Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 187); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 181); // 0
  ActivateTask(CPU2Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 191); // 0
  ActivateTask(CPU2Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 128); // 0
  TerminateTask();

}

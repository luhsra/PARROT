#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task0Subtask4);
DeclareTask(CPU0Task0Subtask6);
DeclareTask(CPU0Task0Subtask7);
DeclareTask(CPU0Task0Subtask11);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU0Task0Subtask14);
DeclareTask(CPU0Task1Subtask1);
DeclareTask(CPU0Task1Subtask3);
DeclareTask(CPU0Task3Subtask2);
DeclareTask(CPU0Task3Subtask5);
DeclareTask(CPU1Task5Subtask0);
DeclareTask(CPU1Task5Subtask9);
DeclareTask(CPU2Task2Subtask8);
DeclareTask(CPU2Task4Subtask10);
DeclareTask(CPU2Task4Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 25); // 0
  ActivateTask(CPU0Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 133); // 0
  ActivateTask(CPU0Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 26); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 28); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 175); // 0
  ActivateTask(CPU0Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 187); // 0
  ActivateTask(CPU0Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 111); // 0
  ActivateTask(CPU0Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 157); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 43); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 26); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 29); // 0
  ActivateTask(CPU0Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 11); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 154); // 0
  ActivateTask(CPU0Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 149); // 0
  ActivateTask(CPU1Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 114); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 107); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 28); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 124); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 2); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 68); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 164); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 88); // 0
  ActivateTask(CPU2Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 176); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 104); // 0
  TerminateTask();

}
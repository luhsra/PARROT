#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task5Subtask1);
DeclareTask(CPU0Task5Subtask3);
DeclareTask(CPU0Task5Subtask5);
DeclareTask(CPU0Task5Subtask12);
DeclareTask(CPU1Task2Subtask0);
DeclareTask(CPU1Task2Subtask7);
DeclareTask(CPU1Task3Subtask2);
DeclareTask(CPU2Task0Subtask6);
DeclareTask(CPU2Task0Subtask8);
DeclareTask(CPU2Task0Subtask9);
DeclareTask(CPU2Task0Subtask11);
DeclareTask(CPU2Task1Subtask10);
DeclareTask(CPU2Task4Subtask4);
DeclareTask(CPU2Task4Subtask13);
DeclareTask(CPU2Task4Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 118); // 0
  ActivateTask(CPU2Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 74); // 0
  ActivateTask(CPU0Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 29); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 172); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 194); // 0
  ActivateTask(CPU0Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 84); // 0
  ActivateTask(CPU0Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 93); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 138); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 111); // 0
  ActivateTask(CPU1Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 8); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 150); // 0
  ActivateTask(CPU2Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 177); // 0
  ActivateTask(CPU2Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 124); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 149); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 86); // 0
  ActivateTask(CPU2Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 189); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 28); // 0
  TerminateTask();

}

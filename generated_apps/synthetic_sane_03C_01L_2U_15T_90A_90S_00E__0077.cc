#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask11);
DeclareTask(CPU0Task5Subtask12);
DeclareTask(CPU0Task5Subtask13);
DeclareTask(CPU0Task5Subtask14);
DeclareTask(CPU1Task0Subtask2);
DeclareTask(CPU1Task0Subtask6);
DeclareTask(CPU1Task0Subtask9);
DeclareTask(CPU1Task2Subtask1);
DeclareTask(CPU1Task2Subtask3);
DeclareTask(CPU1Task2Subtask4);
DeclareTask(CPU2Task3Subtask0);
DeclareTask(CPU2Task3Subtask7);
DeclareTask(CPU2Task3Subtask8);
DeclareTask(CPU2Task3Subtask10);
DeclareTask(CPU2Task4Subtask5);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 182); // 0
  ActivateTask(CPU0Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 46); // 0
  ActivateTask(CPU0Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 85); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 143); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 28); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 177); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 153); // 0
  ActivateTask(CPU1Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 82); // 0
  ActivateTask(CPU1Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 48); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 96); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 148); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 21); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 109); // 0
  ActivateTask(CPU1Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 9); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 53); // 0
  ActivateTask(CPU2Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 23); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 113); // 0
  ActivateTask(CPU2Task3Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 50); // 0
  ActivateTask(CPU2Task3Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 118); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 25); // 0
  ActivateTask(CPU1Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 179); // 0
  TerminateTask();

}

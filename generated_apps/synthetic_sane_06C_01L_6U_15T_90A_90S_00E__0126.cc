#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task2Subtask1);
DeclareTask(CPU0Task2Subtask3);
DeclareTask(CPU0Task2Subtask12);
DeclareTask(CPU1Task3Subtask4);
DeclareTask(CPU1Task3Subtask6);
DeclareTask(CPU2Task5Subtask10);
DeclareTask(CPU3Task4Subtask5);
DeclareTask(CPU3Task4Subtask7);
DeclareTask(CPU4Task0Subtask0);
DeclareTask(CPU4Task0Subtask2);
DeclareTask(CPU4Task0Subtask9);
DeclareTask(CPU4Task0Subtask13);
DeclareTask(CPU4Task0Subtask14);
DeclareTask(CPU5Task1Subtask8);
DeclareTask(CPU5Task1Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 5); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 12); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 172); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 124); // 0
  ActivateTask(CPU0Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 72); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 48); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 100); // 0
  ActivateTask(CPU1Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 175); // 0
  ActivateTask(CPU4Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 157); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 88); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 78); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 166); // 0
  ActivateTask(CPU3Task4Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 198); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 47); // 0
  ActivateTask(CPU4Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 34); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 98); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 175); // 0
  ActivateTask(CPU0Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 85); // 0
  ActivateTask(CPU4Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 192); // 0
  ActivateTask(CPU5Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 94); // 0
  TerminateTask();

}

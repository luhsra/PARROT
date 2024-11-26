#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask6);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU1Task4Subtask8);
DeclareTask(CPU1Task4Subtask12);
DeclareTask(CPU1Task4Subtask14);
DeclareTask(CPU2Task1Subtask4);
DeclareTask(CPU3Task5Subtask5);
DeclareTask(CPU3Task5Subtask9);
DeclareTask(CPU4Task3Subtask0);
DeclareTask(CPU4Task3Subtask1);
DeclareTask(CPU4Task3Subtask2);
DeclareTask(CPU4Task3Subtask3);
DeclareTask(CPU4Task3Subtask11);
DeclareTask(CPU5Task2Subtask7);
DeclareTask(CPU5Task2Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 97); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 121); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 6); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 14); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 58); // 0
  ActivateTask(CPU1Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 64); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 133); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 59); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 117); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 182); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 56); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 200); // 0
  ActivateTask(CPU3Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 1); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 113); // 0
  ActivateTask(CPU4Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 8); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 94); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 178); // 0
  ActivateTask(CPU4Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 193); // 0
  ActivateTask(CPU4Task3Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 157); // 0
  ActivateTask(CPU4Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 124); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 60); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 180); // 0
  ActivateTask(CPU5Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 138); // 0
  TerminateTask();

}

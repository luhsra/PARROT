#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task5Subtask4);
DeclareTask(CPU0Task5Subtask12);
DeclareTask(CPU0Task5Subtask13);
DeclareTask(CPU0Task5Subtask14);
DeclareTask(CPU1Task3Subtask1);
DeclareTask(CPU1Task3Subtask7);
DeclareTask(CPU1Task3Subtask8);
DeclareTask(CPU2Task2Subtask6);
DeclareTask(CPU3Task1Subtask2);
DeclareTask(CPU3Task1Subtask11);
DeclareTask(CPU4Task0Subtask0);
DeclareTask(CPU4Task0Subtask3);
DeclareTask(CPU4Task0Subtask10);
DeclareTask(CPU5Task4Subtask5);
DeclareTask(CPU5Task4Subtask9);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 56); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 10); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 87); // 0
  ActivateTask(CPU0Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 73); // 0
  ActivateTask(CPU4Task0Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 180); // 0
  ActivateTask(CPU0Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 68); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 185); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 26); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 118); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 181); // 0
  ActivateTask(CPU1Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 64); // 0
  ActivateTask(CPU1Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 53); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 49); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 19); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 100); // 0
  ActivateTask(CPU3Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 70); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 50); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 176); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 164); // 0
  ActivateTask(CPU0Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 93); // 0
  ActivateTask(CPU4Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 168); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 28); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 24); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 126); // 0
  ActivateTask(CPU5Task4Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 15); // 0
  TerminateTask();

}

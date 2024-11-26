#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task2Subtask2);
DeclareTask(CPU0Task2Subtask5);
DeclareTask(CPU0Task2Subtask9);
DeclareTask(CPU0Task2Subtask14);
DeclareTask(CPU1Task5Subtask8);
DeclareTask(CPU1Task5Subtask10);
DeclareTask(CPU1Task5Subtask12);
DeclareTask(CPU2Task3Subtask1);
DeclareTask(CPU2Task3Subtask6);
DeclareTask(CPU2Task3Subtask13);
DeclareTask(CPU3Task4Subtask11);
DeclareTask(CPU4Task1Subtask4);
DeclareTask(CPU5Task0Subtask0);
DeclareTask(CPU5Task0Subtask3);
DeclareTask(CPU5Task0Subtask7);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 171); // 0
  ActivateTask(CPU0Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 52); // 0
  ActivateTask(CPU0Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 7); // 0
  ActivateTask(CPU0Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 9); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 75); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 187); // 0
  ActivateTask(CPU1Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 63); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 48); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 9); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 188); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 38); // 0
  ActivateTask(CPU2Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 200); // 0
  ActivateTask(CPU2Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 78); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 168); // 0
  ActivateTask(CPU1Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 49); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 180); // 0
  ActivateTask(CPU5Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 78); // 0
  ActivateTask(CPU5Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 174); // 0
  TerminateTask();

}

#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask8);
DeclareTask(CPU0Task4Subtask11);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU1Task2Subtask3);
DeclareTask(CPU1Task2Subtask7);
DeclareTask(CPU2Task3Subtask10);
DeclareTask(CPU2Task3Subtask13);
DeclareTask(CPU3Task0Subtask4);
DeclareTask(CPU3Task0Subtask6);
DeclareTask(CPU4Task1Subtask1);
DeclareTask(CPU4Task1Subtask2);
DeclareTask(CPU5Task5Subtask0);
DeclareTask(CPU5Task5Subtask5);
DeclareTask(CPU5Task5Subtask9);
DeclareTask(CPU5Task5Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 158); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 166); // 0
  ActivateTask(CPU0Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 195); // 0
  ActivateTask(CPU0Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 51); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 195); // 0
  ActivateTask(CPU1Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 105); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 161); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 95); // 0
  ActivateTask(CPU2Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 106); // 0
  ActivateTask(CPU1Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 92); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 194); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 71); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 178); // 0
  ActivateTask(CPU3Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 5); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 152); // 0
  ActivateTask(CPU4Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 118); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 139); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 84); // 0
  ActivateTask(CPU5Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 41); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 104); // 0
  TerminateTask();

}

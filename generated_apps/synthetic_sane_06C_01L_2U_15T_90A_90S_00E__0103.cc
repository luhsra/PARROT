#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask7);
DeclareTask(CPU0Task1Subtask12);
DeclareTask(CPU1Task5Subtask0);
DeclareTask(CPU1Task5Subtask8);
DeclareTask(CPU1Task5Subtask13);
DeclareTask(CPU2Task0Subtask1);
DeclareTask(CPU2Task0Subtask4);
DeclareTask(CPU2Task0Subtask10);
DeclareTask(CPU3Task4Subtask2);
DeclareTask(CPU3Task4Subtask11);
DeclareTask(CPU3Task4Subtask14);
DeclareTask(CPU4Task3Subtask3);
DeclareTask(CPU4Task3Subtask5);
DeclareTask(CPU5Task2Subtask6);
DeclareTask(CPU5Task2Subtask9);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 14); // 0
  ActivateTask(CPU0Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 17); // 0
  ActivateTask(CPU2Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 10); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 88); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 20); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 189); // 0
  ActivateTask(CPU3Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 192); // 0
  ActivateTask(CPU1Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 173); // 0
  ActivateTask(CPU1Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 184); // 0
  ActivateTask(CPU4Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 44); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 19); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 195); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 4); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 109); // 0
  ActivateTask(CPU2Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 54); // 0
  ActivateTask(CPU2Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 139); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 141); // 0
  ActivateTask(CPU3Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 92); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 36); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 139); // 0
  ActivateTask(CPU4Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 89); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 56); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 175); // 0
  ActivateTask(CPU5Task2Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 38); // 0
  TerminateTask();

}

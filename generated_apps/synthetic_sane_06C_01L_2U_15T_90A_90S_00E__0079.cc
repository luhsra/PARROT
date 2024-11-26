#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask4);
DeclareTask(CPU0Task4Subtask6);
DeclareTask(CPU1Task0Subtask0);
DeclareTask(CPU1Task0Subtask10);
DeclareTask(CPU1Task0Subtask11);
DeclareTask(CPU2Task5Subtask1);
DeclareTask(CPU2Task5Subtask9);
DeclareTask(CPU3Task3Subtask2);
DeclareTask(CPU3Task3Subtask3);
DeclareTask(CPU3Task3Subtask7);
DeclareTask(CPU3Task3Subtask12);
DeclareTask(CPU4Task1Subtask5);
DeclareTask(CPU4Task1Subtask8);
DeclareTask(CPU4Task1Subtask14);
DeclareTask(CPU5Task2Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 131); // 0
  ActivateTask(CPU0Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 65); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 56); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 145); // 0
  ActivateTask(CPU1Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 196); // 0
  ActivateTask(CPU1Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 6); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 145); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 158); // 0
  ActivateTask(CPU3Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 155); // 0
  ActivateTask(CPU2Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 180); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 75); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 13); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 25); // 0
  ActivateTask(CPU3Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 198); // 0
  ActivateTask(CPU3Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 10); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 68); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 169); // 0
  ActivateTask(CPU4Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 70); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 180); // 0
  ActivateTask(CPU4Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 161); // 0
  TerminateTask();

}

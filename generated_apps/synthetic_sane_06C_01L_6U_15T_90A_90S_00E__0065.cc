#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask0);
DeclareTask(CPU0Task4Subtask13);
DeclareTask(CPU1Task5Subtask2);
DeclareTask(CPU1Task5Subtask5);
DeclareTask(CPU1Task5Subtask8);
DeclareTask(CPU2Task3Subtask3);
DeclareTask(CPU3Task0Subtask4);
DeclareTask(CPU3Task0Subtask6);
DeclareTask(CPU3Task0Subtask11);
DeclareTask(CPU3Task0Subtask12);
DeclareTask(CPU4Task2Subtask1);
DeclareTask(CPU4Task2Subtask9);
DeclareTask(CPU4Task2Subtask10);
DeclareTask(CPU4Task2Subtask14);
DeclareTask(CPU5Task1Subtask7);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 84); // 0
  ActivateTask(CPU0Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 9); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 135); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 196); // 0
  ActivateTask(CPU4Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 152); // 0
  ActivateTask(CPU1Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 162); // 0
  ActivateTask(CPU1Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 147); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 104); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 194); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 121); // 0
  ActivateTask(CPU3Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 131); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 160); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 74); // 0
  ActivateTask(CPU3Task0Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  ActivateTask(CPU3Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 172); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 33); // 0
  ActivateTask(CPU4Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 52); // 0
  ActivateTask(CPU4Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 151); // 0
  TerminateTask();

}

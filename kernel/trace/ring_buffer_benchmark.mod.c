#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x838b13e7, "ring_buffer_free" },
	{ 0xdec4b638, "set_user_nice" },
	{ 0xb9d80e63, "sched_setscheduler" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xf4fc2d6c, "__ring_buffer_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb2ff3ad0, "ring_buffer_free_read_page" },
	{ 0x6a6cafd2, "ring_buffer_read_page" },
	{ 0x4aadeb9a, "ring_buffer_alloc_read_page" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xfc70c5d8, "ring_buffer_consume" },
	{ 0x29361773, "complete" },
	{ 0x1a551022, "ring_buffer_lock_reserve" },
	{ 0xa83f641e, "ring_buffer_unlock_commit" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9d09e8ae, "ring_buffer_event_data" },
	{ 0xddd58dc0, "ring_buffer_reset" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc72e1233, "__trace_bprintk" },
	{ 0xd9ecb670, "ring_buffer_overruns" },
	{ 0x4e109192, "ring_buffer_entries" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb1e25684, "__trace_bputs" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x1000e51, "schedule" },
	{ 0xf7d6636f, "current_task" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F4EACF13311B4F104135148");
MODULE_INFO(rhelversion, "8.0");

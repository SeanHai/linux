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
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0x71df4aa3, "set_cpus_allowed_ptr" },
	{ 0xcca03002, "cpu_bit_bitmap" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xfb578fc5, "memset" },
	{ 0x40cf6820, "cpu_sibling_map" },
	{ 0x690924ff, "alloc_cpumask_var" },
	{ 0x56398615, "mark_tsc_unstable" },
	{ 0x1000e51, "schedule" },
	{ 0xf09cc34, "schedule_timeout_killable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x586b364, "mds_idle_clear" },
	{ 0xbfe5616d, "tick_broadcast_oneshot_control" },
	{ 0x5c5a1b16, "tick_broadcast_control" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb9d80e63, "sched_setscheduler" },
	{ 0xf7d6636f, "current_task" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x27e1a049, "printk" },
	{ 0xc42dcb99, "acpi_evaluate_ost" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:ACPI000C:*");

MODULE_INFO(srcversion, "D15D3C6765F725E890F7534");
MODULE_INFO(rhelversion, "8.0");

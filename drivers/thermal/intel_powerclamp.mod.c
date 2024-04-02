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
	{ 0x58a1b98b, "param_get_int" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x2ff3cc15, "thermal_cooling_device_unregister" },
	{ 0xe4ba049, "__cpuhp_remove_state" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x7d4facf, "thermal_cooling_device_register" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xf66a486e, "__cpuhp_setup_state" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x408d2a04, "play_idle" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xc7f4b92, "single_open" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x17d25c1, "kthread_destroy_worker" },
	{ 0xe2ed0f4f, "kthread_cancel_delayed_work_sync" },
	{ 0xa6f5f8fd, "kthread_cancel_work_sync" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7bbf7ccb, "kthread_queue_delayed_work" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdfaf80c3, "kthread_queue_work" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x586bb842, "kthread_delayed_work_timer_fn" },
	{ 0xb9d80e63, "sched_setscheduler" },
	{ 0xc2c47b6b, "kthread_create_worker_on_cpu" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x27e1a049, "printk" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*0083*");

MODULE_INFO(srcversion, "D7AB4B67AD46712644A873D");
MODULE_INFO(rhelversion, "8.0");

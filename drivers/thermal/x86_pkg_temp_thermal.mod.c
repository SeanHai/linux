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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xe4ba049, "__cpuhp_remove_state" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0xff9ef847, "debugfs_create_u32" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x8a7cb9c4, "platform_thermal_package_rate_control" },
	{ 0x90de0452, "platform_thermal_package_notify" },
	{ 0xf66a486e, "__cpuhp_setup_state" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x482bc218, "thermal_zone_device_register" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x3111f1ae, "thermal_zone_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2069847b, "cpumask_any_but" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe1cf2bb, "thermal_zone_device_update" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x177847e, "cpu_info" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C6*");

MODULE_INFO(srcversion, "B9BE1CF4AC6BCBE9308E525");
MODULE_INFO(rhelversion, "8.0");

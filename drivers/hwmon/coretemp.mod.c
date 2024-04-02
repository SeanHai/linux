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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf66a486e, "__cpuhp_setup_state" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x27e1a049, "printk" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xbb35675b, "__bitmap_intersects" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x28318305, "snprintf" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xdfe3440, "pci_get_domain_bus_and_slot" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x91715312, "sprintf" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9877db88, "cpumask_next_and" },
	{ 0x40cf6820, "cpu_sibling_map" },
	{ 0x4507f4a8, "cpuhp_tasks_frozen" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x177847e, "cpu_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C0*");

MODULE_INFO(srcversion, "F53F8909B252D5B961D37D8");
MODULE_INFO(rhelversion, "8.0");

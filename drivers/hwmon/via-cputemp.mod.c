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
	{ 0xe4ba049, "__cpuhp_remove_state" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf66a486e, "__cpuhp_setup_state" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x27e1a049, "printk" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x177847e, "cpu_info" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91715312, "sprintf" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon-vid";

MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0007mod*:feature:*");

MODULE_INFO(srcversion, "4CD98A8DB7F801A41D4A468");
MODULE_INFO(rhelversion, "8.0");

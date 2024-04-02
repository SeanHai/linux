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
	{ 0x2aec7605, "transport_class_register" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xfede319f, "transport_destroy_device" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x8eb1fa29, "attribute_container_unregister" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x91018733, "device_del" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x2b466fee, "transport_add_device" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x496e41db, "transport_configure_device" },
	{ 0x5d3062b8, "attribute_container_register" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x373db350, "kstrtoint" },
	{ 0xcca62a76, "device_add" },
	{ 0x338ef2db, "transport_class_unregister" },
	{ 0x79b817b7, "scsi_target_unblock" },
	{ 0xd0c86c05, "put_device" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd1635b1e, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x85ffabba, "get_device" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0x150e16f4, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x551be51f, "device_initialize" },
	{ 0x9fa53b66, "transport_remove_device" },
	{ 0x108ce642, "scsi_target_block" },
	{ 0x76ca9e4e, "dev_set_name" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6034313F942A2C2F0CCB48C");
MODULE_INFO(rhelversion, "8.0");

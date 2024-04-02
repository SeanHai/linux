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
	{ 0x743ac344, "class_find_device" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x6a8db397, "cdev_init" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x55bc312b, "osd_sec_init_nosec_doall_caps" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0xc7f690bd, "osd_dev_fini" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x27e1a049, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xc351790f, "driver_unregister" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x1744b557, "osd_dev_init" },
	{ 0x50d83074, "fput" },
	{ 0xf4d8a729, "osd_auto_detect_ver" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa0ef795, "cdev_device_add" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x2a71a178, "scsi_register_driver" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8d6d3c23, "scsi_test_unit_ready" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x85ffabba, "get_device" },
	{ 0x9a983107, "ida_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x44e60b26, "ida_pre_get" },
	{ 0x551be51f, "device_initialize" },
	{ 0x9a6b3206, "cdev_device_del" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x884bb40c, "scsi_device_get" },
	{ 0x9fed5c45, "ida_get_new_above" },
	{ 0x352e6812, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd";


MODULE_INFO(srcversion, "BFAA916ED3D327DC562F36F");
MODULE_INFO(rhelversion, "8.0");

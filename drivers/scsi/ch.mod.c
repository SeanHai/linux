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
	{ 0x6dc87645, "param_array_ops" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xa047947, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2a71a178, "scsi_register_driver" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x27e1a049, "printk" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x2df52479, "device_create" },
	{ 0x91715312, "sprintf" },
	{ 0x787b953, "idr_alloc" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0x884bb40c, "scsi_device_get" },
	{ 0xdf30c245, "idr_find" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xd79b1308, "scsi_ioctl" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x843316af, "scsi_ioctl_block_when_processing_errors" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd3c4d6d4, "scsi_print_sense_hdr" },
	{ 0x7d82f045, "__scsi_execute" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "37AC2A66EE5A92CC75D1741");
MODULE_INFO(rhelversion, "8.0");

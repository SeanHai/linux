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
	{ 0x66d95603, "scsi_remove_target" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0x754d539c, "strlen" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xfede319f, "transport_destroy_device" },
	{ 0x8eb1fa29, "attribute_container_unregister" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x3f0edaa0, "scsi_scan_target" },
	{ 0x91715312, "sprintf" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0x91018733, "device_del" },
	{ 0x2b466fee, "transport_add_device" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x496e41db, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x5d3062b8, "attribute_container_register" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0xcca62a76, "device_add" },
	{ 0x338ef2db, "transport_class_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd1635b1e, "transport_setup_device" },
	{ 0x5f4a909b, "bsg_unregister_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x85ffabba, "get_device" },
	{ 0x150e16f4, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x551be51f, "device_initialize" },
	{ 0x6d8c812e, "scsi_get_vpd_page" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x9fa53b66, "transport_remove_device" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x28318305, "snprintf" },
	{ 0xc4f6749f, "bsg_job_done" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x3063a613, "bsg_remove_queue" },
	{ 0xb0cb15be, "bsg_setup_queue" },
	{ 0xc3ae7593, "scsi_mode_sense" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6C903E815C381F5A4AD5B54");
MODULE_INFO(rhelversion, "8.0");

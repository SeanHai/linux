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
	{ 0x204c5067, "scsi_dev_info_add_list" },
	{ 0x2aec7605, "transport_class_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x5d1917d8, "scsi_get_device_flags_keyed" },
	{ 0x3b12ba61, "scsi_target_resume" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x53dfe8b0, "anon_transport_class_register" },
	{ 0x8eb1fa29, "attribute_container_unregister" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x97bdfa60, "scsi_dev_info_remove_list" },
	{ 0x91715312, "sprintf" },
	{ 0x96407461, "scsi_device_quiesce" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xf940ff38, "sysfs_chmod_file" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7d82f045, "__scsi_execute" },
	{ 0x5a921311, "strncmp" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x5d3062b8, "attribute_container_register" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x338ef2db, "transport_class_unregister" },
	{ 0xe48ada37, "sysfs_update_group" },
	{ 0x7b178afe, "unlock_system_sleep" },
	{ 0xebc9a09f, "lock_system_sleep" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xe6478472, "_dev_info" },
	{ 0x2733eaf7, "scsi_dev_info_list_add_keyed" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd855d813, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x150e16f4, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xbfda5337, "scsi_target_quiesce" },
	{ 0xbb0f7fa6, "scsi_is_target_device" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x884bb40c, "scsi_device_get" },
	{ 0xd5186827, "anon_transport_class_unregister" },
	{ 0x5e5201f3, "scsi_is_sdev_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3957EE6384DE855E7EED1BD");
MODULE_INFO(rhelversion, "8.0");

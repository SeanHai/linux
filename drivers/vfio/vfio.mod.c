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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7076c8c2, "iommu_group_remove_device" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb9d1be60, "pci_bus_type" },
	{ 0x6a8db397, "cdev_init" },
	{ 0xea2b701b, "up_read" },
	{ 0x6224110e, "iommu_group_add_device" },
	{ 0x81188c30, "match_string" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xd1306c13, "blocking_notifier_chain_unregister" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91185511, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xd55ad93b, "iommu_group_get_iommudata" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6bddef80, "misc_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xf7d6636f, "current_task" },
	{ 0xc66b77b1, "iommu_group_set_iommudata" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x36075bb5, "iommu_group_register_notifier" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6a1733eb, "iommu_group_unregister_notifier" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2df52479, "device_create" },
	{ 0x787b953, "idr_alloc" },
	{ 0x85142f62, "up_write" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x65baf559, "down_write" },
	{ 0x50d83074, "fput" },
	{ 0x6e7943ec, "iommu_group_id" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x76d451c4, "add_taint" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa5fdae48, "iommu_present" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe8200fae, "blocking_notifier_call_chain" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1d68b3a4, "iommu_group_for_each_dev" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67d83e37, "blocking_notifier_chain_register" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8d22bb58, "iommu_group_alloc" },
	{ 0x253b4b2, "fd_install" },
	{ 0x56c2cb73, "refcount_dec_and_mutex_lock" },
	{ 0xa047947, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xef1ad663, "iommu_group_get" },
	{ 0x121da905, "queue_work_on" },
	{ 0xbcdd5b99, "iommu_group_set_name" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdf30c245, "idr_find" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x29b60e32, "anon_inode_getfile" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x85f5e2aa, "krealloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "500061EF2DA390E701E6573");
MODULE_INFO(rhelversion, "8.0");

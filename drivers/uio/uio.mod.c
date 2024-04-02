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
	{ 0x2cec6038, "kobject_put" },
	{ 0x62770c6d, "cdev_alloc" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0xafab167e, "kobject_set_name" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xc985b4ca, "kobject_create_and_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x1abb7cf1, "generic_access_phys" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xd257960c, "device_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x787b953, "idr_alloc" },
	{ 0x973d7fb, "kobject_add" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x85ffabba, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c173686, "remap_pfn_range" },
	{ 0x217548d3, "kobject_init" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdf30c245, "idr_find" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "158A22F68D147144AB6CB40");
MODULE_INFO(rhelversion, "8.0");

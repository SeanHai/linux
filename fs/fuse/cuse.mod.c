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
	{ 0x6fb3e52e, "fuse_file_poll" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xa047947, "class_destroy" },
	{ 0x6bddef80, "misc_register" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0xd89bfaa5, "fuse_dev_operations" },
	{ 0xa083f96b, "fuse_dev_free" },
	{ 0x4fe8d2aa, "fuse_put_request" },
	{ 0x22ede90e, "fuse_request_send_background" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xf4dbc5e, "fuse_get_req_for_background" },
	{ 0xd7235b03, "fuse_dev_alloc" },
	{ 0x1f70da67, "fuse_conn_init" },
	{ 0x27e1a049, "printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0x62770c6d, "cdev_alloc" },
	{ 0xcca62a76, "device_add" },
	{ 0xd0c86c05, "put_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x551be51f, "device_initialize" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x754d539c, "strlen" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x272a0464, "fuse_direct_io" },
	{ 0x123068bd, "fuse_do_ioctl" },
	{ 0xaf4ee24e, "fuse_do_open" },
	{ 0x11a222f9, "fuse_conn_get" },
	{ 0x295a6dfc, "fuse_sync_release" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0xc22e743a, "fuse_dev_release" },
	{ 0x61d81b76, "fuse_conn_put" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x91715312, "sprintf" },
	{ 0x48adc305, "fuse_abort_conn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";


MODULE_INFO(srcversion, "AC24D92654CC886EF660642");
MODULE_INFO(rhelversion, "8.0");

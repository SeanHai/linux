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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x946c4370, "inode_dax" },
	{ 0x6a8db397, "cdev_init" },
	{ 0x713aabb2, "vmf_insert_pfn_pud" },
	{ 0x3135e68a, "vmf_insert_pfn_pmd" },
	{ 0x3f84bcd7, "dax_alive" },
	{ 0x7242d92, "put_dax" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xd84d35bd, "dax_read_lock" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0xf7d6636f, "current_task" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xbe2e20f6, "dax_inode" },
	{ 0xdfa4b491, "linear_hugepage_index" },
	{ 0x8eee3399, "dax_read_unlock" },
	{ 0x9e3f36ab, "devm_add_action" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd0c86c05, "put_device" },
	{ 0xfad9c827, "kill_dax" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa0ef795, "cdev_device_add" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1ec97303, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xddf72b3c, "alloc_dax" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x25e39502, "vm_insert_mixed" },
	{ 0x37a0cba, "kfree" },
	{ 0xf82e0bdc, "unmap_mapping_range" },
	{ 0x8b910be2, "errseq_sample" },
	{ 0xb1f3f28a, "sysfs_create_groups" },
	{ 0x551be51f, "device_initialize" },
	{ 0x771f8491, "sysfs_remove_groups" },
	{ 0xa047947, "class_destroy" },
	{ 0x9a6b3206, "cdev_device_del" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xce2ba1bd, "__class_create" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F215610AC655FB96740B8AB");
MODULE_INFO(rhelversion, "8.0");

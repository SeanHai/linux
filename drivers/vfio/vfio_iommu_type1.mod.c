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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x1b766973, "vfio_unregister_iommu_driver" },
	{ 0x9d9ca7ea, "vfio_register_iommu_driver" },
	{ 0xe8200fae, "blocking_notifier_call_chain" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xa5fdae48, "iommu_present" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xe8c60527, "iommu_map" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xb5a588bc, "iommu_capable" },
	{ 0xcc2dbfd8, "irq_domain_check_msi_remap" },
	{ 0x7006586e, "iommu_get_group_resv_regions" },
	{ 0x23867817, "iommu_attach_group" },
	{ 0xbcbbe9be, "iommu_domain_set_attr" },
	{ 0x671e8815, "iommu_domain_alloc" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x1d68b3a4, "iommu_group_for_each_dev" },
	{ 0x27e1a049, "printk" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8928a0cf, "__put_task_struct" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1718a902, "iommu_unmap_fast" },
	{ 0xc2643683, "iommu_iova_to_phys" },
	{ 0x2628e7dd, "iommu_unmap" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x413b06d3, "mmput" },
	{ 0x92cf6e99, "get_task_mm" },
	{ 0x85142f62, "up_write" },
	{ 0x1dc568e6, "down_write_killable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xaee0614d, "get_user_pages_longterm" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0xe330909c, "find_vma" },
	{ 0xea2b701b, "up_read" },
	{ 0x620b0a6a, "get_user_pages_remote" },
	{ 0xf7d6636f, "current_task" },
	{ 0x91185511, "down_read" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x54c99fac, "mem_section" },
	{ 0x392992df, "iommu_domain_free" },
	{ 0xe3df3c7b, "iommu_detach_group" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x67d83e37, "blocking_notifier_chain_register" },
	{ 0xd1306c13, "blocking_notifier_chain_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vfio";


MODULE_INFO(srcversion, "8FC86BE1B54FA356A9B9156");
MODULE_INFO(rhelversion, "8.0");

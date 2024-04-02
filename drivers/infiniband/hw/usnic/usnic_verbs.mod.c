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
	{ 0xb75249f4, "vnic_dev_unregister" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa9c2cec5, "kobject_get" },
	{ 0xb9d1be60, "pci_bus_type" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf59e423c, "iommu_attach_device" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xde320733, "sockfd_lookup" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x41c99cea, "ib_get_eth_speed" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xe8c60527, "iommu_map" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xfe8d22f1, "netdev_cmd_to_name" },
	{ 0x8ff5c83, "set_page_dirty_lock" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf0ef15b4, "list_sort" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x413b06d3, "mmput" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x833fca5e, "in_dev_finish_destroy" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc985b4ca, "kobject_create_and_add" },
	{ 0x7e53c8ad, "ib_alloc_device" },
	{ 0x3a966ef, "down_write_trylock" },
	{ 0x5f8155db, "ib_dealloc_device" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xf7d6636f, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x92cf6e99, "get_task_mm" },
	{ 0x71c0e774, "kobject_init_and_add" },
	{ 0xad0807be, "vnic_dev_get_res" },
	{ 0x99457252, "iommu_set_fault_handler" },
	{ 0x3beb505f, "vnic_dev_register" },
	{ 0x9166fada, "strncpy" },
	{ 0x9b7dd98c, "ib_query_port" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xa1716baf, "__rb_insert_augmented" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2628e7dd, "iommu_unmap" },
	{ 0x671e8815, "iommu_domain_alloc" },
	{ 0x7855e0d0, "vnic_dev_get_pdev" },
	{ 0x9a910d01, "simple_open" },
	{ 0x85142f62, "up_write" },
	{ 0x392992df, "iommu_domain_free" },
	{ 0x65baf559, "down_write" },
	{ 0x50d83074, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb5a588bc, "iommu_capable" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x6e4edad6, "pci_clear_master" },
	{ 0x2db5f84b, "iommu_detach_device" },
	{ 0xdc8d485c, "ib_dispatch_event" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa5fdae48, "iommu_present" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa5d633ef, "get_user_pages" },
	{ 0x3037ddc0, "ib_register_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaa84e77b, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x618fc75c, "vnic_dev_get_res_count" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c173686, "remap_pfn_range" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xca9360b5, "rb_next" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xa54ddeb5, "enic_api_devcmd_proxy_by_index" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=enic,ib_core";

MODULE_ALIAS("pci:v00001137d000000CFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2C1625CE13915A2DCAAE75C");
MODULE_INFO(rhelversion, "8.0");

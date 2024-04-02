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
	{ 0xe3d6a107, "irq_chip_ack_parent" },
	{ 0x2e792ad1, "pci_msi_set_desc" },
	{ 0x866966e2, "pci_msi_prepare" },
	{ 0x267dd1b1, "__vmbus_driver_register" },
	{ 0x7da4a994, "vmbus_driver_unregister" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x36b8a778, "pci_destroy_slot" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x75848088, "pci_stop_and_remove_bus_device" },
	{ 0xdfe3440, "pci_get_domain_bus_and_slot" },
	{ 0xd3864e35, "pci_add_resource" },
	{ 0x5ec87aaf, "pci_bus_add_devices" },
	{ 0xe1a164a8, "pci_bus_assign_resources" },
	{ 0xf9d6a2da, "pci_create_root_bus" },
	{ 0x4c784254, "pci_msi_create_irq_domain" },
	{ 0xac57ef18, "handle_edge_irq" },
	{ 0x5f3e7ff3, "x86_vector_domain" },
	{ 0x91bc54ee, "__irq_domain_alloc_fwnode" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3a15e14b, "vmbus_allocate_mmio" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdd915c3c, "vmbus_open" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x79a5d6a, "vmbus_recvpacket_raw" },
	{ 0xedbb9f58, "pci_remove_root_bus" },
	{ 0x417e11a6, "pci_stop_root_bus" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf2de6c04, "irq_domain_free_fwnode" },
	{ 0x4f7f8511, "irq_domain_remove" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0xedc03953, "iounmap" },
	{ 0x97cfa8d1, "vmbus_close" },
	{ 0x121da905, "queue_work_on" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0xc03399e8, "pci_scan_child_bus" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf36ae92e, "pci_msi_unmask_irq" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x9bad141d, "hv_hypercall_pg" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9877db88, "cpumask_next_and" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x3fae6ab0, "hv_vp_index" },
	{ 0x1bf40628, "irqd_cfg" },
	{ 0x31e2e77f, "vmbus_free_mmio" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xb7c69de5, "msi_desc_to_pci_dev" },
	{ 0x62a53c26, "irq_domain_get_irq_data" },
	{ 0x20a610c5, "vmbus_sendpacket" },
	{ 0x997ea2a9, "pci_msi_mask_irq" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8cb9585e, "pci_create_slot" },
	{ 0x28318305, "snprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus";

MODULE_ALIAS("vmbus:1df6c444444400449d52802e27ede19f");

MODULE_INFO(srcversion, "280C874DDD188ACEFD57083");
MODULE_INFO(rhelversion, "8.0");

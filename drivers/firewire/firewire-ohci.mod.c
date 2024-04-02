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
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x405c1144, "get_seconds" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe22dbe63, "fw_core_handle_bus_reset" },
	{ 0x63c8b394, "pci_release_region" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e0196f, "fw_card_initialize" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xc1e49d87, "fw_schedule_bus_reset" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0x5172ac00, "fw_fill_response" },
	{ 0x2638e03, "fw_core_handle_response" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9f555e3e, "vmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x194b2591, "fw_core_remove_card" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xca83caa7, "fw_core_handle_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd5449e66, "fw_card_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0xb0e602eb, "memmove" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x18c475b, "pci_request_region" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc00i10*");

MODULE_INFO(srcversion, "8B4497A37CBF92E644E403D");
MODULE_INFO(rhelversion, "8.0");

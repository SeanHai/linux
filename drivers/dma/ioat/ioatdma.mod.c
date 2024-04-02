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
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xb9d1be60, "pci_bus_type" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7a3d3928, "alloc_dca_provider" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x9d604e0, "dma_async_tx_descriptor_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xe9ec6844, "kobject_del" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe9b41467, "param_ops_string" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbe010cb0, "dma_async_device_register" },
	{ 0x4b0c6f2d, "dmaengine_unmap_put" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xa50bcff0, "x86_cpu_to_apicid" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x71c0e774, "kobject_init_and_add" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x76d451c4, "add_taint" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0xcad615e2, "devm_free_irq" },
	{ 0x2d38eb42, "register_dca_provider" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x1ec97303, "dev_driver_string" },
	{ 0xcd8dd495, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4b7114ba, "unregister_dca_provider" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x8c1ec119, "free_dca_provider" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0x37a0cba, "kfree" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xcd3b4802, "dma_async_device_unregister" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x432fe2e1, "dma_pool_create" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xb0734f0, "pcie_capability_write_word" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xf6e09477, "pcie_capability_read_word" },
	{ 0x8ff1cef8, "dmam_pool_create" },
	{ 0x93527c4c, "pci_save_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dca";

MODULE_ALIAS("pci:v00008086d00003430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003431sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003433sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003429sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003714sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003716sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003717sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003718sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003719sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F53sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F1409A0BF32AA8365880778");
MODULE_INFO(rhelversion, "8.0");

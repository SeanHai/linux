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
	{ 0xf9a482f9, "msleep" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdf7e4b04, "pci_enable_sriov" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x754d539c, "strlen" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd48c7500, "pci_disable_sriov" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe98d105f, "build_skb" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xe2aae5cc, "crc8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x69f8785f, "__cpu_present_mask" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x28318305, "snprintf" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xa063d0db, "pci_find_ext_capability" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc8";


MODULE_INFO(srcversion, "5CCC649CBA8264AC453F058");
MODULE_INFO(rhelversion, "8.0");

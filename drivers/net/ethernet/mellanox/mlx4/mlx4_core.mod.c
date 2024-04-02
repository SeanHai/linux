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
	{ 0xda6e998f, "devlink_port_register" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x402b8281, "__request_module" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xea2b701b, "up_read" },
	{ 0xdf7e4b04, "pci_enable_sriov" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x754d539c, "strlen" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xd48c7500, "pci_disable_sriov" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x7e5ad7b2, "pcie_print_link_status" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2f910e3c, "devlink_alloc" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x91715312, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x2a2c4ae4, "__alloc_pages_nodemask" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0x91185511, "down_read" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x525c1ee, "zalloc_cpumask_var" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x318f7969, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x373db350, "kstrtoint" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0xb8b78625, "devlink_port_unregister" },
	{ 0x50c60211, "alloc_cpu_rmap" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xa79f6dfa, "radix_tree_delete" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xdcd000b8, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0xcd8dd495, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x2dc7de88, "__radix_tree_insert" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4fd5932f, "param_ops_byte" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0xddcb57de, "devlink_free" },
	{ 0x1640fed1, "devlink_register" },
	{ 0xdb7bc03a, "pci_sriov_get_totalvfs" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x4d0723e6, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x880d0e9d, "radix_tree_lookup" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xca9360b5, "rb_next" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x55f5019b, "__kmalloc_node" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x263074f8, "irq_set_affinity_hint" },
	{ 0x432fe2e1, "dma_pool_create" },
	{ 0xcab97d75, "devlink_unregister" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0xb0734f0, "pcie_capability_write_word" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=devlink";

MODULE_ALIAS("pci:v000015B3d00006340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000634Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006732sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000673Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000675Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006764sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006746sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000676Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "613A7E88184E57A60ABFB81");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x9d604e0, "dma_async_tx_descriptor_init" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x1fa1d95c, "sha256_zero_message_hash" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xd7d5f9f1, "devm_kasprintf" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbe010cb0, "dma_async_device_register" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xb98f5e97, "acpi_match_device" },
	{ 0x4b0c6f2d, "dmaengine_unmap_put" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x6bddef80, "misc_register" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x9a910d01, "simple_open" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x71dd3247, "device_get_dma_attr" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x63e0369e, "dma_run_dependencies" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe6478472, "_dev_info" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x946dd559, "sha224_zero_message_hash" },
	{ 0x7b5a4926, "sha1_zero_message_hash" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0xcd8dd495, "dma_pool_alloc" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0xcd3b4802, "dma_async_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x19e6c23b, "firmware_request_nowarn" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x432fe2e1, "dma_pool_create" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001022d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001456sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001468sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001486sv*sd*bc*sc*i*");
MODULE_ALIAS("acpi*:AMDI0C00:*");

MODULE_INFO(srcversion, "3A3C86E80DEFE385431824D");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x710884d6, "set_page_dirty" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x6bddef80, "misc_register" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9f555e3e, "vmap" },
	{ 0x54fdde6a, "iov_iter_kvec" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xf441ac43, "ioread8_rep" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecb1c289, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x3f33e88c, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xe484e35f, "ioread32" },
	{ 0x9af36e0c, "get_user_pages_fast" },
	{ 0x85f5e2aa, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000015ADd00000740sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9A92E15A9B009B500EF6E56");
MODULE_INFO(rhelversion, "8.0");

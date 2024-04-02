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
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x36508a4d, "pci_get_slot" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7e53c8ad, "ib_alloc_device" },
	{ 0x5f8155db, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x9b7dd98c, "ib_query_port" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xaf309ec7, "ib_umem_get" },
	{ 0x6626afca, "down" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdc8d485c, "ib_dispatch_event" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6e949eed, "ib_umem_page_count" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3037ddc0, "ib_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xaa84e77b, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0x4bf4d99d, "ib_sg_to_pages" },
	{ 0x6c173686, "remap_pfn_range" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xd2938951, "ib_modify_qp_is_ok" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xd1525896, "ib_umem_release" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core";

MODULE_ALIAS("pci:v000015ADd00000820sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0AA10FE806A270DD17169BB");
MODULE_INFO(rhelversion, "8.0");

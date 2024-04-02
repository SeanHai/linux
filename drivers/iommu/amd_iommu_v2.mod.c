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
	{ 0xb9d1be60, "pci_bus_type" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x70301e8a, "amd_iommu_rlookup_table" },
	{ 0xea2b701b, "up_read" },
	{ 0xde7c09cb, "amd_iommu_domain_clear_gcr3" },
	{ 0xa4aeba4, "amd_iommu_domain_direct_map" },
	{ 0x23867817, "iommu_attach_group" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x983b999a, "amd_iommu_domain_enable_v2" },
	{ 0xf7d1109, "translation_pre_enabled" },
	{ 0x76517624, "mmu_notifier_register" },
	{ 0x30c89bf9, "amd_iommu_flush_page" },
	{ 0x413b06d3, "mmput" },
	{ 0x91185511, "down_read" },
	{ 0x3c9cb64d, "amd_iommu_complete_ppr" },
	{ 0xe1e2eca1, "amd_iommu_flush_tlb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x92cf6e99, "get_task_mm" },
	{ 0x42f9af6d, "mmu_notifier_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c47294a, "get_dev_data" },
	{ 0xdfe3440, "pci_get_domain_bus_and_slot" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x671e8815, "iommu_domain_alloc" },
	{ 0x392992df, "iommu_domain_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa79cfd62, "amd_iommu_domain_set_gcr3" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe3df3c7b, "iommu_detach_group" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x485b620f, "handle_mm_fault" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x76fb08a7, "amd_iommu_unregister_ppr_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0x48d50e79, "amd_iommu_register_ppr_notifier" },
	{ 0xafd5ff2c, "amd_iommu_v2_supported" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xef1ad663, "iommu_group_get" },
	{ 0x121da905, "queue_work_on" },
	{ 0x55cecfa, "find_extend_vma" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "116F50AE2BC78ABAA9257FF");
MODULE_INFO(rhelversion, "8.0");

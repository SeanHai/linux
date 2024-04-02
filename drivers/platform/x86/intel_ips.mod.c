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
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xc7f4b92, "single_open" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x985ca3e0, "single_release" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x4b94a99b, "seq_read" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xe6478472, "_dev_info" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x5541ea93, "on_each_cpu" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xf1e98c74, "avenrun" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00003B32sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6A1DE510D6A5016699940C7");
MODULE_INFO(rhelversion, "8.0");

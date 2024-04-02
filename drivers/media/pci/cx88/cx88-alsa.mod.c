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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x7ce35843, "cx88_risc_databuffer" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x91715312, "sprintf" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x5f5d0a93, "cx88_core_get" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x7aa125d3, "cx88_sram_channel_setup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x47100a37, "snd_pcm_hw_constraint_pow2" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0x240d6d5d, "cx88_sram_channel_dump" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0x27e1a049, "printk" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0x34fd1c2e, "cx88_core_irq" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb044101, "cx88_core_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe042a9a1, "v4l2_ctrl_g_ctrl" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x40571b16, "__v4l2_ctrl_s_ctrl" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xce71a0eb, "v4l2_ctrl_find" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,cx88xx,videodev";

MODULE_ALIAS("pci:v000014F1d00008801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00008811sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6F13C20F929A230B07C60AC");
MODULE_INFO(rhelversion, "8.0");

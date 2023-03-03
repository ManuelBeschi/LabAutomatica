% Close all figures, clear variables and command window
close all;
clear all;
clc;

% Define the leading joint and search for .mat files containing it
iax = 2;
leading_joint = sprintf('joint%d', iax);
files = dir('*.mat');
tests = [];

% Load the .mat files containing the leading joint
for itest = 1:length(files)
    if contains(files(itest).name, leading_joint)
        if isempty(tests)
            tests = load(files(itest).name);
        else
            tests(itest) = load(files(itest).name);
        end
    end
end

% Define the legend and the Bode plot options
legenda = {};
bode_opts = bodeoptions('cstprefs');
bode_opts.PhaseWrapping = 'on';

% Loop through the loaded .mat files and plot the Bode diagrams
for itest = 1:length(tests)
    
    % Plot the first Bode diagram
    figure(1)
    h = bodeplot(tests(itest).experiment_freqresp(1:2,:), bode_opts);
    hold on
    showConfidence(h, 3)
    grid on
    xlim([1e-1 1e4])
    
    % Plot the second Bode diagram
    figure(2)
    h = bodeplot(tests(itest).experiment_freqresp(3:4,:), bode_opts);
    hold on
    showConfidence(h, 3)
    grid on
    xlim([1e-1 1e4])

    % Plot the third Bode diagram
    figure(3)
    h = bodeplot(tests(itest).experiment_freqresp(5,1), bode_opts);
    hold on
    showConfidence(h, 3)
    grid on
    xlim([1e-1 1e4])
    
    % Plot the fourth Bode diagram
    figure(4)
    h = bodeplot(tests(itest).experiment_freqresp(5+(1:2),:), bode_opts);
    hold on
    showConfidence(h, 3)
    grid on
    xlim([1e-1 1e4])
    
    % Plot the fifth Bode diagram
    figure(5)
    h = bodeplot(tests(itest).experiment_freqresp(5+(3:4),:), bode_opts);
    hold on
    showConfidence(h, 3)
    grid on
    xlim([1e-1 1e4])

    % Plot the sixth Bode diagram
    figure(6)
    h = bodeplot(tests(itest).experiment_freqresp(10,1), bode_opts);
    hold on
    showConfidence(h, 3)
    grid on
    xlim([1e-1 1e4])
    
    % Add the test name to the legend
    legenda{end+1} = tests(itest).test_name;
end

% Export the figures as PNG files and set their positions
figures = findobj('Type', 'Figure');
for idx = 1:length(figures)
    figure(figures(idx))
    legend(legenda)
    set(figures(idx), 'Position', [1921 1 1920 961]);
    export_fig(sprintf('collabot_figures_%d.png', idx))
end
